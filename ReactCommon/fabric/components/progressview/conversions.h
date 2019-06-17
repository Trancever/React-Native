/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <folly/dynamic.h>
#include <react/components/progressview/primitives.h>

namespace facebook {
    namespace react {
        
        inline void fromRawValue(
                                 const RawValue &value,
                                 ProgressViewProgressViewStyle &result) {
            auto string = (std::string)value;
            if (string == "default") {
                result = ProgressViewProgressViewStyle::Default;
                return;
            }
            if (string == "bar") {
                result = ProgressViewProgressViewStyle::Bar;
                return;
            }
            abort();
        }
        
        inline std::string toString(const ProgressViewProgressViewStyle &value) {
            switch (value) {
                case ProgressViewProgressViewStyle::Default:
                    return "default";
                case ProgressViewProgressViewStyle::Bar:
                    return "bar";
            }
        }
        
    } // namespace react
} // namespace facebook
