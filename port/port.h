/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2025-05-26     RV           the first version
 */
#ifndef APPLICATIONS_FIREMQTT_PORT_PORT_H_
#define APPLICATIONS_FIREMQTT_PORT_PORT_H_

#define min(a, b) ((a) < (b) ? (a) : (b))

typedef struct NetworkContext
{
    int socket;
} NetworkContext_t;

uint32_t getCurrentTime(void);
int32_t transportSend(NetworkContext_t *pNetworkContext, const void *pBuffer, size_t bytesToSend);
int32_t transportRecv(NetworkContext_t *pNetworkContext, void *pBuffer, size_t bytesToRead);

#endif /* APPLICATIONS_FIREMQTT_PORT_PORT_H_ */
