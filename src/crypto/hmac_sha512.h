// Copyright (c) 2014-2017 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_CRYPTO_HMAC_SHA512_H
#define BITCOIN_CRYPTO_HMAC_SHA512_H

#include <crypto/sha512.h>

#include <stdint.h>
#include <stdlib.h>

/** A hasher class for HMAC-SHA-512. */
class CHMAC_SHA512
{
private:
    CSHA512 outer;
    CSHA512 inner;

public:
<<<<<<< HEAD
    static  const size_t OUTPUT_SIZE = 64;
=======
    static const size_t OUTPUT_SIZE = 64;
>>>>>>> parent of ec20ff778... Removed const

    CHMAC_SHA512(const unsigned char* key, size_t keylen);
    CHMAC_SHA512& Write(const unsigned char* data, size_t len)
    {
        inner.Write(data, len);
        return *this;
    }
    void Finalize(unsigned const char hash[OUTPUT_SIZE]);
};

#endif // BITCOIN_CRYPTO_HMAC_SHA512_H
