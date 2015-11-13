/**
 * Copyright (c) 2015 Runtime Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef H_BLE_HS_ACK_
#define H_BLE_HS_ACK_

#include <inttypes.h>

struct ble_hs_ack {
    uint16_t bha_opcode;
    uint8_t bha_status;
    uint8_t *bha_params;
    int bha_params_len;
};

typedef void ble_hs_ack_fn(struct ble_hs_ack *ack, void *arg);

void ble_hs_ack_rx(struct ble_hs_ack *ack);
void ble_hs_ack_set_callback(ble_hs_ack_fn *cb, void *arg);
void ble_hs_ack_init(void);

#endif
