
/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */
#pragma once

#include <react/components/view/ViewProps.h>
#include <react/graphics/Color.h>
#include <react/imagemanager/primitives.h>
#include <vector>

namespace facebook {
namespace react {

enum class ProgressViewProgressViewStyle { Default, Bar };

static inline void fromRawValue(const RawValue &value, ProgressViewProgressViewStyle &result) {
  auto string = (std::string)value;
  if (string == "default") { result = ProgressViewProgressViewStyle::Default; return; }
  if (string == "bar") { result = ProgressViewProgressViewStyle::Bar; return; }
  abort();
}

static inline std::string toString(const ProgressViewProgressViewStyle &value) {
  switch (value) {
    case ProgressViewProgressViewStyle::Default: return "default";
    case ProgressViewProgressViewStyle::Bar: return "bar";
  }
}

class ProgressViewProps final : public ViewProps {
 public:
  ProgressViewProps() = default;
  ProgressViewProps(const ProgressViewProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  const Float progress{1.0};
  const ProgressViewProgressViewStyle progressViewStyle{ProgressViewProgressViewStyle::Default};
  const SharedColor progressTintColor{};
  const SharedColor trackTintColor{};
  const ImageSource progressImage{};
  const ImageSource trackImage{};
};

class PullToRefreshViewProps final : public ViewProps {
 public:
  PullToRefreshViewProps() = default;
  PullToRefreshViewProps(const PullToRefreshViewProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  const SharedColor tintColor{};
  const SharedColor titleColor{};
  const std::string title{""};
  const bool refreshing{false};
};

class AndroidSwipeRefreshLayoutProps final : public ViewProps {
 public:
  AndroidSwipeRefreshLayoutProps() = default;
  AndroidSwipeRefreshLayoutProps(const AndroidSwipeRefreshLayoutProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  const bool enabled{true};
  const std::vector<SharedColor> colors{};
  const SharedColor progressBackgroundColor{};
  const int size{1};
  const Float progressViewOffset{0.0};
  const bool refreshing{false};
};

class SliderProps final : public ViewProps {
 public:
  SliderProps() = default;
  SliderProps(const SliderProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  const bool disabled{false};
  const bool enabled{false};
  const ImageSource maximumTrackImage{};
  const SharedColor maximumTrackTintColor{};
  const Float maximumValue{1.0};
  const ImageSource minimumTrackImage{};
  const SharedColor minimumTrackTintColor{};
  const Float minimumValue{0.0};
  const Float step{0.0};
  const std::string testID{""};
  const ImageSource thumbImage{};
  const ImageSource trackImage{};
  const SharedColor thumbTintColor{};
  const Float value{0.0};
};

enum class ActivityIndicatorViewSize { Small, Large };

static inline void fromRawValue(const RawValue &value, ActivityIndicatorViewSize &result) {
  auto string = (std::string)value;
  if (string == "small") { result = ActivityIndicatorViewSize::Small; return; }
  if (string == "large") { result = ActivityIndicatorViewSize::Large; return; }
  abort();
}

static inline std::string toString(const ActivityIndicatorViewSize &value) {
  switch (value) {
    case ActivityIndicatorViewSize::Small: return "small";
    case ActivityIndicatorViewSize::Large: return "large";
  }
}

class ActivityIndicatorViewProps final : public ViewProps {
 public:
  ActivityIndicatorViewProps() = default;
  ActivityIndicatorViewProps(const ActivityIndicatorViewProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  const bool hidesWhenStopped{false};
  const bool animating{false};
  const SharedColor color{};
  const ActivityIndicatorViewSize size{ActivityIndicatorViewSize::Small};
};

class UnimplementedNativeViewProps final : public ViewProps {
 public:
  UnimplementedNativeViewProps() = default;
  UnimplementedNativeViewProps(const UnimplementedNativeViewProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  const std::string name{""};
};

class SwitchProps final : public ViewProps {
 public:
  SwitchProps() = default;
  SwitchProps(const SwitchProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  const bool disabled{false};
  const bool value{false};
  const SharedColor tintColor{};
  const SharedColor onTintColor{};
  const SharedColor thumbTintColor{};
};

enum class ModalHostViewAnimationType { None, Slide, Fade };

static inline void fromRawValue(const RawValue &value, ModalHostViewAnimationType &result) {
  auto string = (std::string)value;
  if (string == "none") { result = ModalHostViewAnimationType::None; return; }
  if (string == "slide") { result = ModalHostViewAnimationType::Slide; return; }
  if (string == "fade") { result = ModalHostViewAnimationType::Fade; return; }
  abort();
}

static inline std::string toString(const ModalHostViewAnimationType &value) {
  switch (value) {
    case ModalHostViewAnimationType::None: return "none";
    case ModalHostViewAnimationType::Slide: return "slide";
    case ModalHostViewAnimationType::Fade: return "fade";
  }
}
enum class ModalHostViewPresentationStyle { FullScreen, PageSheet, FormSheet, OverFullScreen };

static inline void fromRawValue(const RawValue &value, ModalHostViewPresentationStyle &result) {
  auto string = (std::string)value;
  if (string == "fullScreen") { result = ModalHostViewPresentationStyle::FullScreen; return; }
  if (string == "pageSheet") { result = ModalHostViewPresentationStyle::PageSheet; return; }
  if (string == "formSheet") { result = ModalHostViewPresentationStyle::FormSheet; return; }
  if (string == "overFullScreen") { result = ModalHostViewPresentationStyle::OverFullScreen; return; }
  abort();
}

static inline std::string toString(const ModalHostViewPresentationStyle &value) {
  switch (value) {
    case ModalHostViewPresentationStyle::FullScreen: return "fullScreen";
    case ModalHostViewPresentationStyle::PageSheet: return "pageSheet";
    case ModalHostViewPresentationStyle::FormSheet: return "formSheet";
    case ModalHostViewPresentationStyle::OverFullScreen: return "overFullScreen";
  }
}
enum class ModalHostViewSupportedOrientations { Portrait, PortraitUpsideDown, Landscape, LandscapeLeft, LandscapeRight };

static inline void fromRawValue(const RawValue &value, ModalHostViewSupportedOrientations &result) {
  auto string = (std::string)value;
  if (string == "portrait") { result = ModalHostViewSupportedOrientations::Portrait; return; }
  if (string == "portrait-upside-down") { result = ModalHostViewSupportedOrientations::PortraitUpsideDown; return; }
  if (string == "landscape") { result = ModalHostViewSupportedOrientations::Landscape; return; }
  if (string == "landscape-left") { result = ModalHostViewSupportedOrientations::LandscapeLeft; return; }
  if (string == "landscape-right") { result = ModalHostViewSupportedOrientations::LandscapeRight; return; }
  abort();
}

static inline std::string toString(const ModalHostViewSupportedOrientations &value) {
  switch (value) {
    case ModalHostViewSupportedOrientations::Portrait: return "portrait";
    case ModalHostViewSupportedOrientations::PortraitUpsideDown: return "portrait-upside-down";
    case ModalHostViewSupportedOrientations::Landscape: return "landscape";
    case ModalHostViewSupportedOrientations::LandscapeLeft: return "landscape-left";
    case ModalHostViewSupportedOrientations::LandscapeRight: return "landscape-right";
  }
}

class ModalHostViewProps final : public ViewProps {
 public:
  ModalHostViewProps() = default;
  ModalHostViewProps(const ModalHostViewProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  const ModalHostViewAnimationType animationType{ModalHostViewAnimationType::None};
  const ModalHostViewPresentationStyle presentationStyle{ModalHostViewPresentationStyle::FullScreen};
  const bool transparent{false};
  const bool hardwareAccelerated{false};
  const bool visible{true};
  const ModalHostViewSupportedOrientations supportedOrientations{ModalHostViewSupportedOrientations::Portrait};
  const int identifier{0};
};

} // namespace react
} // namespace facebook
