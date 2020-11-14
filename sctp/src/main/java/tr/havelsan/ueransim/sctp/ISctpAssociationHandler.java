/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.sctp;

public interface ISctpAssociationHandler {

    void onSetup(SctpAssociation sctpAssociation);

    void onShutdown();
}
