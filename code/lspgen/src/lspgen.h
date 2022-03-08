/*
 * LSPGEN - Generic Link State Packet generation for link-state protocols.
 *
 * Hannes Gredler, January 2022
 *
 * Copyright (C) 2015-2022, RtBrick, Inc.
 */
#ifndef __LSPGEN_H__
#define __LSPGEN_H__

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <dirent.h>
#include <getopt.h>
#include <limits.h>
#include <time.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/queue.h>
#include <sys/types.h>
#include <sys/un.h>
#include <arpa/inet.h>

#include "libdict/dict.h"

#include <common_include.h>

#include "lspgen_lsdb.h"

#define CTRL_SOCKET_BUFSIZE 65536

__uint128_t lspgen_load_addr(uint8_t *, uint32_t);
void lspgen_store_addr(__uint128_t, uint8_t *, uint32_t);
void lspgen_store_bcd_addr(__uint128_t, uint8_t *, uint32_t);

/* lspgen_mrt.c */
void lspgen_dump_mrt(lsdb_ctx_t *);

/* lspgen_pcap.c */
void lspgen_dump_pcap(lsdb_ctx_t *);

/* lspgen_ctrl.c */
void lspgen_ctrl_connect_cb(timer_s *);

/* lspgen_stream.c */
void lspgen_dump_stream(lsdb_ctx_t *);

/* lspgen_config.c */
void lspgen_read_config(lsdb_ctx_t *);
void lspgen_write_config(lsdb_ctx_t *);

/* lspgen_packet.c */
void lspgen_serialize_attr(lsdb_attr_t *, io_buffer_t *);
void lspgen_gen_packet(lsdb_ctx_t *);

#endif /*__LSPGEN_H__*/
