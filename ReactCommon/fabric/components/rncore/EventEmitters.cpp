
/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include <react/components/rncore/EventEmitters.h>

namespace facebook {
namespace react {


void PullToRefreshViewEventEmitter::onRefresh(PullToRefreshViewOnRefreshStruct event) const {
  dispatchEvent("refresh", [event=std::move(event)](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    
    return payload;
  });
}
void AndroidSwipeRefreshLayoutEventEmitter::onRefresh(AndroidSwipeRefreshLayoutOnRefreshStruct event) const {
  dispatchEvent("refresh", [event=std::move(event)](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    
    return payload;
  });
}
void SliderEventEmitter::onChange(SliderOnChangeStruct event) const {
  dispatchEvent("change", [event=std::move(event)](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    payload.setProperty(runtime, "value", event.value);
payload.setProperty(runtime, "fromUser", event.fromUser);
    return payload;
  });
}
void SliderEventEmitter::onSlidingComplete(SliderOnSlidingCompleteStruct event) const {
  dispatchEvent("slidingComplete", [event=std::move(event)](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    payload.setProperty(runtime, "value", event.value);
payload.setProperty(runtime, "fromUser", event.fromUser);
    return payload;
  });
}
void SliderEventEmitter::onValueChange(SliderOnValueChangeStruct event) const {
  dispatchEvent("valueChange", [event=std::move(event)](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    payload.setProperty(runtime, "value", event.value);
payload.setProperty(runtime, "fromUser", event.fromUser);
    return payload;
  });
}


void SwitchEventEmitter::onChange(SwitchOnChangeStruct event) const {
  dispatchEvent("change", [event=std::move(event)](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    payload.setProperty(runtime, "value", event.value);
    return payload;
  });
}
void ModalHostViewEventEmitter::onRequestClose(ModalHostViewOnRequestCloseStruct event) const {
  dispatchEvent("requestClose", [event=std::move(event)](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    
    return payload;
  });
}
void ModalHostViewEventEmitter::onShow(ModalHostViewOnShowStruct event) const {
  dispatchEvent("show", [event=std::move(event)](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    
    return payload;
  });
}
void ModalHostViewEventEmitter::onDismiss(ModalHostViewOnDismissStruct event) const {
  dispatchEvent("dismiss", [event=std::move(event)](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    
    return payload;
  });
}
void ModalHostViewEventEmitter::onOrientationChange(ModalHostViewOnOrientationChangeStruct event) const {
  dispatchEvent("orientationChange", [event=std::move(event)](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    
    return payload;
  });
}

} // namespace react
} // namespace facebook
