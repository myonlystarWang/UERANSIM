//
// This file is a part of UERANSIM open source project.
// Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#pragma once

#include <logger.hpp>
#include <memory>
#include <nts.hpp>
#include <thread>
#include <unordered_map>
#include <vector>

#include "ue_nts.hpp"
#include "ue_tun_task.hpp"
#include "ue_types.hpp"

namespace nr::ue
{

class UeAppTask : public NtsTask
{
  private:
    TaskBase *base;
    std::unique_ptr<Logger> logger;

    UeStatusInfo statusInfo;
    TunTask *tunTasks[16];

  public:
    explicit UeAppTask(TaskBase *base);
    ~UeAppTask() override = default;

  protected:
    void onStart() override;
    void onLoop() override;
    void onQuit() override;

  private:
    void receiveStatusUpdate(NwUeStatusUpdate &msg);
    void setupTunInterface(const PduSession *pduSession);
};

} // namespace nr::ue
