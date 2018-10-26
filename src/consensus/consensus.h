// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2015 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_CONSENSUS_CONSENSUS_H
#define BITCOIN_CONSENSUS_CONSENSUS_H

/** The maximum allowed size for a serialized block, in bytes (network rule) */
// static const unsigned int MAX_BLOCK_SIZE = 1000000;
static const unsigned int MAX_LEGACY_BLOCK_SIZE = (6 * 1000 * 1000);
inline unsigned int MaxBlockSize(bool fDIP0001Active /*= false */)
{
    return fDIP0001Active ? MAX_LEGACY_BLOCK_SIZE * 2 : MAX_LEGACY_BLOCK_SIZE;
}
/** The maximum allowed number of signature check operations in a block (network rule) */
// static const unsigned int MAX_BLOCK_SIGOPS = MAX_BLOCK_SIZE/50;
inline unsigned int MaxBlockSigOps(bool fDIP0001Active /*= false */)
{
    return MaxBlockSize(fDIP0001Active) / 50;
}
/** Coinbase transaction outputs can only be spent after this number of new blocks (network rule) */
static const int COINBASE_MATURITY = 150; //test

/** Flags for nSequence and nLockTime locks */
enum {
    /* Interpret sequence numbers as relative lock-time constraints. */
    LOCKTIME_VERIFY_SEQUENCE = (1 << 0),

    /* Use GetMedianTimePast() instead of nTime for end point timestamp. */
    LOCKTIME_MEDIAN_TIME_PAST = (1 << 1),
};

static const int MN_COLLATERAL = 2000;
static const int PHI2_TIMESTAMP = 1540530860+100;

#endif // BITCOIN_CONSENSUS_CONSENSUS_H
