/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "SIGNEDDATA"
 * 	found in "SIGNEDDATA.asn1"
 * 	`asn1c -S/skeletons`
 */

#include "asn_internal.h"

#include "ESSCertID.h"

static asn_TYPE_member_t asn_MBR_ESSCertID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ESSCertID, certHash),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_Hash,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"certHash"
		},
	{ ATF_POINTER, 1, offsetof(struct ESSCertID, issuerSerial),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_IssuerSerial,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"issuerSerial"
		},
};
static ber_tlv_tag_t asn_DEF_ESSCertID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ESSCertID_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 0, 0, 0 }, /* certHash at 103 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 } /* issuerSerial at 104 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ESSCertID_specs_1 = {
	sizeof(struct ESSCertID),
	offsetof(struct ESSCertID, _asn_ctx),
	asn_MAP_ESSCertID_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ESSCertID = {
	"ESSCertID",
	"ESSCertID",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ESSCertID_tags_1,
	sizeof(asn_DEF_ESSCertID_tags_1)
		/sizeof(asn_DEF_ESSCertID_tags_1[0]), /* 1 */
	asn_DEF_ESSCertID_tags_1,	/* Same as above */
	sizeof(asn_DEF_ESSCertID_tags_1)
		/sizeof(asn_DEF_ESSCertID_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ESSCertID_1,
	2,	/* Elements count */
	&asn_SPC_ESSCertID_specs_1	/* Additional specs */
};
