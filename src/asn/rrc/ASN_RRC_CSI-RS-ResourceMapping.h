/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_CSI_RS_ResourceMapping_H_
#define	_ASN_RRC_CSI_RS_ResourceMapping_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "ASN_RRC_CSI-FrequencyOccupation.h"
#include <BIT_STRING.h>
#include <constr_CHOICE.h>
#include <NULL.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_CSI_RS_ResourceMapping__frequencyDomainAllocation_PR {
	ASN_RRC_CSI_RS_ResourceMapping__frequencyDomainAllocation_PR_NOTHING,	/* No components present */
	ASN_RRC_CSI_RS_ResourceMapping__frequencyDomainAllocation_PR_row1,
	ASN_RRC_CSI_RS_ResourceMapping__frequencyDomainAllocation_PR_row2,
	ASN_RRC_CSI_RS_ResourceMapping__frequencyDomainAllocation_PR_row4,
	ASN_RRC_CSI_RS_ResourceMapping__frequencyDomainAllocation_PR_other
} ASN_RRC_CSI_RS_ResourceMapping__frequencyDomainAllocation_PR;
typedef enum ASN_RRC_CSI_RS_ResourceMapping__nrofPorts {
	ASN_RRC_CSI_RS_ResourceMapping__nrofPorts_p1	= 0,
	ASN_RRC_CSI_RS_ResourceMapping__nrofPorts_p2	= 1,
	ASN_RRC_CSI_RS_ResourceMapping__nrofPorts_p4	= 2,
	ASN_RRC_CSI_RS_ResourceMapping__nrofPorts_p8	= 3,
	ASN_RRC_CSI_RS_ResourceMapping__nrofPorts_p12	= 4,
	ASN_RRC_CSI_RS_ResourceMapping__nrofPorts_p16	= 5,
	ASN_RRC_CSI_RS_ResourceMapping__nrofPorts_p24	= 6,
	ASN_RRC_CSI_RS_ResourceMapping__nrofPorts_p32	= 7
} e_ASN_RRC_CSI_RS_ResourceMapping__nrofPorts;
typedef enum ASN_RRC_CSI_RS_ResourceMapping__cdm_Type {
	ASN_RRC_CSI_RS_ResourceMapping__cdm_Type_noCDM	= 0,
	ASN_RRC_CSI_RS_ResourceMapping__cdm_Type_fd_CDM2	= 1,
	ASN_RRC_CSI_RS_ResourceMapping__cdm_Type_cdm4_FD2_TD2	= 2,
	ASN_RRC_CSI_RS_ResourceMapping__cdm_Type_cdm8_FD2_TD4	= 3
} e_ASN_RRC_CSI_RS_ResourceMapping__cdm_Type;
typedef enum ASN_RRC_CSI_RS_ResourceMapping__density_PR {
	ASN_RRC_CSI_RS_ResourceMapping__density_PR_NOTHING,	/* No components present */
	ASN_RRC_CSI_RS_ResourceMapping__density_PR_dot5,
	ASN_RRC_CSI_RS_ResourceMapping__density_PR_one,
	ASN_RRC_CSI_RS_ResourceMapping__density_PR_three,
	ASN_RRC_CSI_RS_ResourceMapping__density_PR_spare
} ASN_RRC_CSI_RS_ResourceMapping__density_PR;
typedef enum ASN_RRC_CSI_RS_ResourceMapping__density__dot5 {
	ASN_RRC_CSI_RS_ResourceMapping__density__dot5_evenPRBs	= 0,
	ASN_RRC_CSI_RS_ResourceMapping__density__dot5_oddPRBs	= 1
} e_ASN_RRC_CSI_RS_ResourceMapping__density__dot5;

/* ASN_RRC_CSI-RS-ResourceMapping */
typedef struct ASN_RRC_CSI_RS_ResourceMapping {
	struct ASN_RRC_CSI_RS_ResourceMapping__frequencyDomainAllocation {
		ASN_RRC_CSI_RS_ResourceMapping__frequencyDomainAllocation_PR present;
		union ASN_RRC_CSI_RS_ResourceMapping__ASN_RRC_frequencyDomainAllocation_u {
			BIT_STRING_t	 row1;
			BIT_STRING_t	 row2;
			BIT_STRING_t	 row4;
			BIT_STRING_t	 other;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} frequencyDomainAllocation;
	long	 nrofPorts;
	long	 firstOFDMSymbolInTimeDomain;
	long	*firstOFDMSymbolInTimeDomain2;	/* OPTIONAL */
	long	 cdm_Type;
	struct ASN_RRC_CSI_RS_ResourceMapping__density {
		ASN_RRC_CSI_RS_ResourceMapping__density_PR present;
		union ASN_RRC_CSI_RS_ResourceMapping__ASN_RRC_density_u {
			long	 dot5;
			NULL_t	 one;
			NULL_t	 three;
			NULL_t	 spare;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} density;
	ASN_RRC_CSI_FrequencyOccupation_t	 freqBand;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_CSI_RS_ResourceMapping_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_nrofPorts_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_cdm_Type_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_dot5_24;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_CSI_RS_ResourceMapping;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_CSI_RS_ResourceMapping_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_CSI_RS_ResourceMapping_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_CSI_RS_ResourceMapping_H_ */
#include <asn_internal.h>
