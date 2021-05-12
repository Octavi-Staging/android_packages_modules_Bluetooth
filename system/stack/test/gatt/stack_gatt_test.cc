/*
 * Copyright 2021 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <gtest/gtest.h>
#include <cstdint>
#include <map>
#include <string>

#include "common/message_loop_thread.h"

std::map<std::string, int> mock_function_count_map;

void LogMsg(uint32_t trace_set_mask, const char* fmt_str, ...) {}

bluetooth::common::MessageLoopThread* get_main_thread() { return nullptr; }

class StackGattTest : public ::testing::Test {};

TEST_F(StackGattTest, nop) {}