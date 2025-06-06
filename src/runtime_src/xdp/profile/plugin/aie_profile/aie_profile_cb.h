/**
 * Copyright (C) 2023 Advanced Micro Devices, Inc. - All rights reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License"). You may
 * not use this file except in compliance with the License. A copy of the
 * License is located at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

#ifndef XDP_PLUGIN_AIE_PROFILE_CB_H
#define XDP_PLUGIN_AIE_PROFILE_CB_H

#include "xdp/config.h"

extern "C"
XDP_PLUGIN_EXPORT
void updateAIECtrDevice(void* handle, bool hw_context_flow);

extern "C"
XDP_PLUGIN_EXPORT
void endAIECtrPoll(void* handle);

#endif
