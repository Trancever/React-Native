
/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */
#pragma once

#include <react/components/view/ViewEventEmitter.h>

namespace facebook {
namespace react {

class ProgressViewEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  
};
struct PullToRefreshViewOnRefreshStruct {
  
};

class PullToRefreshViewEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  void onRefresh(PullToRefreshViewOnRefreshStruct value) const;
};
struct AndroidSwipeRefreshLayoutOnRefreshStruct {
  
};

class AndroidSwipeRefreshLayoutEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  void onRefresh(AndroidSwipeRefreshLayoutOnRefreshStruct value) const;
};
struct SliderOnChangeStruct {
  Float value;
  bool fromUser;
};

struct SliderOnSlidingCompleteStruct {
  Float value;
  bool fromUser;
};

struct SliderOnValueChangeStruct {
  Float value;
  bool fromUser;
};

class SliderEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  void onChange(SliderOnChangeStruct value) const;

  void onSlidingComplete(SliderOnSlidingCompleteStruct value) const;

  void onValueChange(SliderOnValueChangeStruct value) const;
};
class ActivityIndicatorViewEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  
};
class UnimplementedNativeViewEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  
};
struct SwitchOnChangeStruct {
  bool value;
};

class SwitchEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  void onChange(SwitchOnChangeStruct value) const;
};
struct ModalHostViewOnRequestCloseStruct {
  
};

struct ModalHostViewOnShowStruct {
  
};

struct ModalHostViewOnDismissStruct {
  
};

struct ModalHostViewOnOrientationChangeStruct {
  
};

class ModalHostViewEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  void onRequestClose(ModalHostViewOnRequestCloseStruct value) const;

  void onShow(ModalHostViewOnShowStruct value) const;

  void onDismiss(ModalHostViewOnDismissStruct value) const;

  void onOrientationChange(ModalHostViewOnOrientationChangeStruct value) const;
};

} // namespace react
} // namespace facebook
