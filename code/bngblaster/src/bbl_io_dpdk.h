/*
 * BNG Blaster (BBL) - DPDK
 *
 * Christian Giese, July 2022
 *
 * Copyright (C) 2020-2022, RtBrick, Inc.
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __BBL_DPDK_H__
#define __BBL_DPDK_H__

bool
bbl_io_dpdk_send(bbl_interface_s *interface, uint8_t *packet, uint16_t packet_len);

bool
bbl_io_dpdk_add_interface(bbl_ctx_s *ctx, bbl_interface_s *interface);

bool
bbl_io_dpdk_init(bbl_ctx_s *ctx);

#endif