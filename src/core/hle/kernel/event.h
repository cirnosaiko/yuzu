// Copyright 2014 Citra Emulator Project
// Licensed under GPLv2
// Refer to the license.txt file included.  

#pragma once

#include "common/common_types.h"

#include "core/hle/kernel/kernel.h"
#include "core/hle/svc.h"

namespace Kernel {

/**
 * Clears an event
 * @param handle Handle to event to clear
 * @return Result of operation, 0 on success, otherwise error code
 */
Result ClearEvent(Handle handle);

/**
 * Creates an event
 * @param reset_type ResetType describing how to create event
 * @return Handle to newly created object
 */
Handle CreateEvent(const ResetType reset_type);

} // namespace
