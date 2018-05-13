#ifndef _CRYPTO_H
#define _CRYPTO_H


#define USE_SOFTWARE_IMPLEMENTATION

void crypto_sha256_init();
void crypto_sha256_update(uint8_t * data, size_t len);
void crypto_sha256_update_secret();
void crypto_sha256_final(uint8_t * hash);


void crypto_ecc256_init();
void crypto_ecc256_derive_public_key(uint8_t * data, int len, uint8_t * x, uint8_t * y);

void crypto_ecc256_load_key(uint8_t * data, int len);
void crypto_ecc256_load_attestation_key();
void crypto_ecc256_sign(uint8_t * data, int len, uint8_t * sig);


void generate_private_key(uint8_t * data, int len, uint8_t * data2, int len2, uint8_t * privkey);

extern const uint8_t attestation_cert_der[];
extern const uint16_t attestation_cert_der_size;



#endif
