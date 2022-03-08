/*
 * Utils
 *
 * Hannes Gredler, July 2020
 * Christian Giese, October 2020
 *
 * Copyright (C) 2020-2021, RtBrick, Inc.
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef __COMMON_UTILS_H__
#define __COMMON_UTILS_H__
#include "common.h"

uint64_t read_be_uint(uint8_t *data, size_t length);

bool write_be_uint(uint8_t *data, size_t length, uint64_t value);
bool push_be_uint(struct io_buffer_ *buffer, size_t length, uint64_t value);

bool push_data(io_buffer_t *buffer, uint8_t *data, size_t length);

bool write_le_uint(uint8_t *data, uint32_t length, uint64_t value);
bool push_le_uint(struct io_buffer_ *buffer, uint32_t length, uint64_t value);

const char *val2key(struct keyval_ *keyval, uint32_t val);
uint32_t    key2val(struct keyval_ *ptr, const char *key);
const char *keyval_get_key (struct keyval_ *keyval, uint32_t val);

char *format_mac_address(uint8_t *mac);
char *format_ipv4_address(uint32_t *addr4);
char *format_ipv4_prefix(ipv4_prefix *addr4);
char *format_ipv6_address(ipv6addr_t *addr6);
char *format_ipv6_prefix(ipv6_prefix *addr6);
char *format_iso_prefix(iso_prefix *iso);

bool  scan_ipv4_prefix(const char *str, ipv4_prefix *ipv4);
bool  scan_ipv4_address(const char *str, uint32_t *ipv4);
bool  scan_ipv6_prefix(const char *str, ipv6_prefix *ipv6);
bool  scan_ipv6_address(const char *str, ipv6addr_t *ipv6);
bool  scan_iso_prefix(const char *str, iso_prefix *iso);

void  ipv4_multicast_mac(const uint32_t ipv4, uint8_t* mac);
void  ipv6_multicast_mac(const uint8_t *ipv6, uint8_t* mac);

bool  ipv6_addr_not_zero(ipv6addr_t *addr);
bool  ipv6_prefix_not_zero(ipv6_prefix *prefix);

char *replace_substring(const char* s, const char* old, const char* new);

#endif