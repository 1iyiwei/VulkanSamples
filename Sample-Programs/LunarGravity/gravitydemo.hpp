/*
 * LunarGravity - gravitydemo.hpp
 *
 * Copyright (C) 2017 LunarG, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Mark Young <marky@lunarg.com>
 */

#pragma once

#include "gravityengine.hpp"

class GravityDemo : public GravityEngine {
   public:
    // Create a protected constructor
    GravityDemo();

    // We don't want any copy constructors
    GravityDemo(const GravityDemo &_demo) = delete;
    GravityDemo &operator=(const GravityDemo &demo) = delete;

    // Make the destructor public
    virtual ~GravityDemo();

    virtual bool Init(std::vector<std::string> &arguments);
    virtual void AppendUsageString(std::string &usage);

    virtual bool ProcessEvents();
    virtual bool Update(float comp_time, float game_time);
    virtual bool BeginDrawFrame();
    virtual bool Draw();
    virtual bool EndDrawFrame();
};
