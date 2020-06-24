// Copyright (c) 2014-2016 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_CRYPTO_RIPEMD160_H
#define BITCOIN_CRYPTO_RIPEMD160_H

#include <stdint.h>
#include <stdlib.h>
#include <ref10/hash/ripemd160.h>

/** A hasher class for RIPEMD-160. */
class CRIPEMD160
{
private:
    RIPEMD160_CTX ctx;

public:
    static const size_t OUTPUT_SIZE = RIPEMD160_DIGEST_LENGTH;

    CRIPEMD160();
    CRIPEMD160& Write(const unsigned char* data, size_t len);
    void Finalize(unsigned char hash[OUTPUT_SIZE]);
    CRIPEMD160& Reset();
};

#endif // BITCOIN_CRYPTO_RIPEMD160_H
