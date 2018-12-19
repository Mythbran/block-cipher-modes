/*
 * Block Cipher Modes of Operation
 * @author Dani Huertas
 * @email huertas.dani@gmail.com
 *
 */
#ifndef __CFB_H__
#define __CFB_H__

#include "block-cipher.h"

size_t cfb(blockcipher_fn cipher, uint8_t direction,
  uint8_t *in,
  uint8_t *out,
  uint8_t *iv,
  uint8_t *key,
  size_t key_size,
  size_t block_size,
  size_t length,
  uint8_t last);

#endif
