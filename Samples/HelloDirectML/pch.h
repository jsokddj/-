// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#define NOMINMAX

#include <winrt/Windows.Foundation.h>

#include "d3dx12.h" // The D3D12 Helper Library that you downloaded.
#define DML_TARGET_VERSION_USE_LATEST
#include <DirectML.h> // The DirectML header from the Windows SDK.
#include <DirectMLX.h>

#include <dxgi1_4.h>

#include <algorithm>
#include <array>
#include <cstdint>
#include <cassert>
#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>

