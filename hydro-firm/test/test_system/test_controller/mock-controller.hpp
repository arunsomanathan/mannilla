/*
 * MIT License
 *
 * Copyright (c) 2022 ARUN C S
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/*
 * @author: Arun C S
 * @email: aruncs009@gmail.com
 * @since: 17-10-2022
 */

#ifndef TEST_SYSTEM_TEST_CONTROLLER_TEST_CONTROLLER_HPP
#define TEST_SYSTEM_TEST_CONTROLLER_TEST_CONTROLLER_HPP

#include "gmock/gmock.h"

#include <system/controller/controller.hpp>

// NOLINTNEXTLINE(cppcoreguidelines-pro-type-member-init,hicpp-member-init)
class MockSystemController : public System::Controller {
public:
  // NOLINTNEXTLINE(cppcoreguidelines-pro-type-member-init,hicpp-member-init)
  explicit MockSystemController(System::State &state) : System::Controller(state){};
  // NOLINTNEXTLINE(modernize-use-trailing-return-type)
  MOCK_METHOD(void, turnOnPump, (), (override));
  // NOLINTNEXTLINE(modernize-use-trailing-return-type)
  MOCK_METHOD(void, turnOffPump, (), (override));
  // NOLINTNEXTLINE(modernize-use-trailing-return-type)
  MOCK_METHOD(void, closeValve, (), (override));
  // NOLINTNEXTLINE(modernize-use-trailing-return-type)
  MOCK_METHOD(void, openValve, (), (override));
};

#endif