#import "replacement.h"

#define CSSMOID_SHA1WithRSA (*_CSSMOID_SHA1WithRSA)
#define CSSMOID_SHA256WithRSA (*_CSSMOID_SHA256WithRSA)
#define CSSMOID_SHA384WithRSA (*_CSSMOID_SHA384WithRSA)
#define ReadyHash (*_ReadyHash)
#define SSLAllocBuffer (*_SSLAllocBuffer)
#define SSLFreeBuffer (*_SSLFreeBuffer)
#define SSLDecodeInt (*_SSLDecodeInt)
#define SSLHashMD5 (*_SSLHashMD5)
#define SSLHashSHA1 (*_SSLHashSHA1)
#define SSLHashSHA256 (*_SSLHashSHA256)
#define SSLHashSHA384 (*_SSLHashSHA384)
#define sslEncodeDhParams (*_sslEncodeDhParams)
#define sslFreePubKey (*_sslFreePubKey)
#define sslGetPubKeyFromBits (*_sslGetPubKeyFromBits)
#define sslRawVerify (*_sslRawVerify)
#define sslRsaVerify (*_sslRsaVerify)
