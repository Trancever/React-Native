
/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <react/components/rncore/ShadowNodes.h>
#include <react/core/ConcreteComponentDescriptor.h>

namespace facebook {
namespace react {

using ProgressViewComponentDescriptor = ConcreteComponentDescriptor<ProgressViewShadowNode>;
using PullToRefreshViewComponentDescriptor = ConcreteComponentDescriptor<PullToRefreshViewShadowNode>;
using AndroidSwipeRefreshLayoutComponentDescriptor = ConcreteComponentDescriptor<AndroidSwipeRefreshLayoutShadowNode>;
using ActivityIndicatorViewComponentDescriptor = ConcreteComponentDescriptor<ActivityIndicatorViewShadowNode>;
using UnimplementedNativeViewComponentDescriptor = ConcreteComponentDescriptor<UnimplementedNativeViewShadowNode>;
using SwitchComponentDescriptor = ConcreteComponentDescriptor<SwitchShadowNode>;

} // namespace react
} // namespace facebook
