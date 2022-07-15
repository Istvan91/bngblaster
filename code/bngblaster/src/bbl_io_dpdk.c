/*
 * BNG Blaster (BBL) - DPDK
 *
 * Christian Giese, July 2022
 *
 * Copyright (C) 2020-2022, RtBrick, Inc.
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include "bbl.h"
#include "bbl_pcap.h"
#include "bbl_rx.h"
#include "bbl_tx.h"

#ifdef BNGBLASTER_DPDK

#include <rte_memory.h>
#include <rte_launch.h>
#include <rte_eal.h>
#include <rte_per_lcore.h>
#include <rte_lcore.h>
#include <rte_debug.h>

void
bbl_io_dpdk_rx_job (timer_s *timer)
{
    bbl_interface_s *interface;
    bbl_ctx_s *ctx;

    interface = timer->data;
    if (!interface) {
        return;
    }
    ctx = interface->ctx;

    UNUSED(ctx);
}

void
bbl_io_dpdk_tx_job (timer_s *timer)
{
    bbl_interface_s *interface;
    bbl_ctx_s *ctx;

    interface = timer->data;
    if (!interface) {
        return;
    }
    ctx = interface->ctx;

    UNUSED(ctx);
}

/**
 * bbl_io_dpdk_send
 *
 * Send single packet trough given interface.
 *
 * @param interface interface.
 * @param packet packet to be send
 * @param packet_len packet length
 */
bool
bbl_io_dpdk_send (bbl_interface_s *interface, uint8_t *packet, uint16_t packet_len) {
    UNUSED(interface);
    UNUSED(packet);
    UNUSED(packet_len);        
    return true;
}

/**
 * bbl_io_dpdk_add_interface
 *
 * @param ctx global context
 * @param interface interface.
 */
bool
bbl_io_dpdk_add_interface(bbl_ctx_s *ctx, bbl_interface_s *interface) {
    UNUSED(ctx);
    UNUSED(interface);
    return true;
}

/**
 * bbl_io_dpdk_init
 *
 * @param ctx global context
 */
bool
bbl_io_dpdk_init(bbl_ctx_s *ctx) {
	int ret;

    UNUSED(ctx);

	ret = rte_eal_init(0, NULL);
	if (ret < 0) {
        LOG_NOARG(ERROR, "Invalid EAL arguments\n");
        return false;
    }

    return true;
}

#endif
