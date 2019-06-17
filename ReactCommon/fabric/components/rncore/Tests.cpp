/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include <gtest/gtest.h>
#include <react/components/rncore/Props.h>
#include <react/components/image/conversions.h>
#include <react/core/propsConversions.h>

using namespace facebook::react;

TEST(ProgressViewProps_DoesNotDie, etc) {
  auto const &sourceProps = ProgressViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("xx_invalid_xx", "xx_invalid_xx"));

  ProgressViewProps(sourceProps, rawProps);
}

TEST(ProgressViewProps_progress, etc) {
  auto const &sourceProps = ProgressViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("progress", 1));

  ProgressViewProps(sourceProps, rawProps);
}

TEST(ProgressViewProps_progressViewStyle_Default, etc) {
  auto const &sourceProps = ProgressViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("progressViewStyle", "default"));

  ProgressViewProps(sourceProps, rawProps);
}

TEST(ProgressViewProps_progressViewStyle_Bar, etc) {
  auto const &sourceProps = ProgressViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("progressViewStyle", "bar"));

  ProgressViewProps(sourceProps, rawProps);
}

TEST(ProgressViewProps_progressTintColor, etc) {
  auto const &sourceProps = ProgressViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("progressTintColor", 1));

  ProgressViewProps(sourceProps, rawProps);
}

TEST(ProgressViewProps_trackTintColor, etc) {
  auto const &sourceProps = ProgressViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("trackTintColor", 1));

  ProgressViewProps(sourceProps, rawProps);
}

TEST(ProgressViewProps_progressImage, etc) {
  auto const &sourceProps = ProgressViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("progressImage", folly::dynamic::object("url", "testurl")));

  ProgressViewProps(sourceProps, rawProps);
}

TEST(ProgressViewProps_trackImage, etc) {
  auto const &sourceProps = ProgressViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("trackImage", folly::dynamic::object("url", "testurl")));

  ProgressViewProps(sourceProps, rawProps);
}

TEST(PullToRefreshViewProps_DoesNotDie, etc) {
  auto const &sourceProps = PullToRefreshViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("xx_invalid_xx", "xx_invalid_xx"));

  PullToRefreshViewProps(sourceProps, rawProps);
}

TEST(PullToRefreshViewProps_tintColor, etc) {
  auto const &sourceProps = PullToRefreshViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("tintColor", 1));

  PullToRefreshViewProps(sourceProps, rawProps);
}

TEST(PullToRefreshViewProps_titleColor, etc) {
  auto const &sourceProps = PullToRefreshViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("titleColor", 1));

  PullToRefreshViewProps(sourceProps, rawProps);
}

TEST(PullToRefreshViewProps_title, etc) {
  auto const &sourceProps = PullToRefreshViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("title", "foo"));

  PullToRefreshViewProps(sourceProps, rawProps);
}

TEST(PullToRefreshViewProps_refreshing, etc) {
  auto const &sourceProps = PullToRefreshViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("refreshing", true));

  PullToRefreshViewProps(sourceProps, rawProps);
}

TEST(AndroidSwipeRefreshLayoutProps_DoesNotDie, etc) {
  auto const &sourceProps = AndroidSwipeRefreshLayoutProps();
  auto const &rawProps = RawProps(folly::dynamic::object("xx_invalid_xx", "xx_invalid_xx"));

  AndroidSwipeRefreshLayoutProps(sourceProps, rawProps);
}

TEST(AndroidSwipeRefreshLayoutProps_enabled, etc) {
  auto const &sourceProps = AndroidSwipeRefreshLayoutProps();
  auto const &rawProps = RawProps(folly::dynamic::object("enabled", true));

  AndroidSwipeRefreshLayoutProps(sourceProps, rawProps);
}

TEST(AndroidSwipeRefreshLayoutProps_progressBackgroundColor, etc) {
  auto const &sourceProps = AndroidSwipeRefreshLayoutProps();
  auto const &rawProps = RawProps(folly::dynamic::object("progressBackgroundColor", 1));

  AndroidSwipeRefreshLayoutProps(sourceProps, rawProps);
}

TEST(AndroidSwipeRefreshLayoutProps_progressViewOffset, etc) {
  auto const &sourceProps = AndroidSwipeRefreshLayoutProps();
  auto const &rawProps = RawProps(folly::dynamic::object("progressViewOffset", 0.1));

  AndroidSwipeRefreshLayoutProps(sourceProps, rawProps);
}

TEST(AndroidSwipeRefreshLayoutProps_refreshing, etc) {
  auto const &sourceProps = AndroidSwipeRefreshLayoutProps();
  auto const &rawProps = RawProps(folly::dynamic::object("refreshing", true));

  AndroidSwipeRefreshLayoutProps(sourceProps, rawProps);
}

TEST(SliderProps_DoesNotDie, etc) {
  auto const &sourceProps = SliderProps();
  auto const &rawProps = RawProps(folly::dynamic::object("xx_invalid_xx", "xx_invalid_xx"));

  SliderProps(sourceProps, rawProps);
}

TEST(SliderProps_disabled, etc) {
  auto const &sourceProps = SliderProps();
  auto const &rawProps = RawProps(folly::dynamic::object("disabled", true));

  SliderProps(sourceProps, rawProps);
}

TEST(SliderProps_enabled, etc) {
  auto const &sourceProps = SliderProps();
  auto const &rawProps = RawProps(folly::dynamic::object("enabled", true));

  SliderProps(sourceProps, rawProps);
}

TEST(SliderProps_maximumTrackImage, etc) {
  auto const &sourceProps = SliderProps();
  auto const &rawProps = RawProps(folly::dynamic::object("maximumTrackImage", folly::dynamic::object("url", "testurl")));

  SliderProps(sourceProps, rawProps);
}

TEST(SliderProps_maximumTrackTintColor, etc) {
  auto const &sourceProps = SliderProps();
  auto const &rawProps = RawProps(folly::dynamic::object("maximumTrackTintColor", 1));

  SliderProps(sourceProps, rawProps);
}

TEST(SliderProps_maximumValue, etc) {
  auto const &sourceProps = SliderProps();
  auto const &rawProps = RawProps(folly::dynamic::object("maximumValue", 1));

  SliderProps(sourceProps, rawProps);
}

TEST(SliderProps_minimumTrackImage, etc) {
  auto const &sourceProps = SliderProps();
  auto const &rawProps = RawProps(folly::dynamic::object("minimumTrackImage", folly::dynamic::object("url", "testurl")));

  SliderProps(sourceProps, rawProps);
}

TEST(SliderProps_minimumTrackTintColor, etc) {
  auto const &sourceProps = SliderProps();
  auto const &rawProps = RawProps(folly::dynamic::object("minimumTrackTintColor", 1));

  SliderProps(sourceProps, rawProps);
}

TEST(SliderProps_minimumValue, etc) {
  auto const &sourceProps = SliderProps();
  auto const &rawProps = RawProps(folly::dynamic::object("minimumValue", 0.1));

  SliderProps(sourceProps, rawProps);
}

TEST(SliderProps_step, etc) {
  auto const &sourceProps = SliderProps();
  auto const &rawProps = RawProps(folly::dynamic::object("step", 0.1));

  SliderProps(sourceProps, rawProps);
}

TEST(SliderProps_testID, etc) {
  auto const &sourceProps = SliderProps();
  auto const &rawProps = RawProps(folly::dynamic::object("testID", "foo"));

  SliderProps(sourceProps, rawProps);
}

TEST(SliderProps_thumbImage, etc) {
  auto const &sourceProps = SliderProps();
  auto const &rawProps = RawProps(folly::dynamic::object("thumbImage", folly::dynamic::object("url", "testurl")));

  SliderProps(sourceProps, rawProps);
}

TEST(SliderProps_trackImage, etc) {
  auto const &sourceProps = SliderProps();
  auto const &rawProps = RawProps(folly::dynamic::object("trackImage", folly::dynamic::object("url", "testurl")));

  SliderProps(sourceProps, rawProps);
}

TEST(SliderProps_thumbTintColor, etc) {
  auto const &sourceProps = SliderProps();
  auto const &rawProps = RawProps(folly::dynamic::object("thumbTintColor", 1));

  SliderProps(sourceProps, rawProps);
}

TEST(SliderProps_value, etc) {
  auto const &sourceProps = SliderProps();
  auto const &rawProps = RawProps(folly::dynamic::object("value", 0.1));

  SliderProps(sourceProps, rawProps);
}

TEST(ActivityIndicatorViewProps_DoesNotDie, etc) {
  auto const &sourceProps = ActivityIndicatorViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("xx_invalid_xx", "xx_invalid_xx"));

  ActivityIndicatorViewProps(sourceProps, rawProps);
}

TEST(ActivityIndicatorViewProps_hidesWhenStopped, etc) {
  auto const &sourceProps = ActivityIndicatorViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("hidesWhenStopped", true));

  ActivityIndicatorViewProps(sourceProps, rawProps);
}

TEST(ActivityIndicatorViewProps_animating, etc) {
  auto const &sourceProps = ActivityIndicatorViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("animating", true));

  ActivityIndicatorViewProps(sourceProps, rawProps);
}

TEST(ActivityIndicatorViewProps_color, etc) {
  auto const &sourceProps = ActivityIndicatorViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("color", 1));

  ActivityIndicatorViewProps(sourceProps, rawProps);
}

TEST(ActivityIndicatorViewProps_size_Small, etc) {
  auto const &sourceProps = ActivityIndicatorViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("size", "small"));

  ActivityIndicatorViewProps(sourceProps, rawProps);
}

TEST(ActivityIndicatorViewProps_size_Large, etc) {
  auto const &sourceProps = ActivityIndicatorViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("size", "large"));

  ActivityIndicatorViewProps(sourceProps, rawProps);
}

TEST(UnimplementedNativeViewProps_DoesNotDie, etc) {
  auto const &sourceProps = UnimplementedNativeViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("xx_invalid_xx", "xx_invalid_xx"));

  UnimplementedNativeViewProps(sourceProps, rawProps);
}

TEST(UnimplementedNativeViewProps_name, etc) {
  auto const &sourceProps = UnimplementedNativeViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("name", "foo"));

  UnimplementedNativeViewProps(sourceProps, rawProps);
}

TEST(SwitchProps_DoesNotDie, etc) {
  auto const &sourceProps = SwitchProps();
  auto const &rawProps = RawProps(folly::dynamic::object("xx_invalid_xx", "xx_invalid_xx"));

  SwitchProps(sourceProps, rawProps);
}

TEST(SwitchProps_disabled, etc) {
  auto const &sourceProps = SwitchProps();
  auto const &rawProps = RawProps(folly::dynamic::object("disabled", true));

  SwitchProps(sourceProps, rawProps);
}

TEST(SwitchProps_value, etc) {
  auto const &sourceProps = SwitchProps();
  auto const &rawProps = RawProps(folly::dynamic::object("value", true));

  SwitchProps(sourceProps, rawProps);
}

TEST(SwitchProps_tintColor, etc) {
  auto const &sourceProps = SwitchProps();
  auto const &rawProps = RawProps(folly::dynamic::object("tintColor", 1));

  SwitchProps(sourceProps, rawProps);
}

TEST(SwitchProps_onTintColor, etc) {
  auto const &sourceProps = SwitchProps();
  auto const &rawProps = RawProps(folly::dynamic::object("onTintColor", 1));

  SwitchProps(sourceProps, rawProps);
}

TEST(SwitchProps_thumbTintColor, etc) {
  auto const &sourceProps = SwitchProps();
  auto const &rawProps = RawProps(folly::dynamic::object("thumbTintColor", 1));

  SwitchProps(sourceProps, rawProps);
}

TEST(ModalHostViewProps_DoesNotDie, etc) {
  auto const &sourceProps = ModalHostViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("xx_invalid_xx", "xx_invalid_xx"));

  ModalHostViewProps(sourceProps, rawProps);
}

TEST(ModalHostViewProps_animationType_None, etc) {
  auto const &sourceProps = ModalHostViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("animationType", "none"));

  ModalHostViewProps(sourceProps, rawProps);
}

TEST(ModalHostViewProps_animationType_Slide, etc) {
  auto const &sourceProps = ModalHostViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("animationType", "slide"));

  ModalHostViewProps(sourceProps, rawProps);
}

TEST(ModalHostViewProps_animationType_Fade, etc) {
  auto const &sourceProps = ModalHostViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("animationType", "fade"));

  ModalHostViewProps(sourceProps, rawProps);
}

TEST(ModalHostViewProps_presentationStyle_FullScreen, etc) {
  auto const &sourceProps = ModalHostViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("presentationStyle", "fullScreen"));

  ModalHostViewProps(sourceProps, rawProps);
}

TEST(ModalHostViewProps_presentationStyle_PageSheet, etc) {
  auto const &sourceProps = ModalHostViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("presentationStyle", "pageSheet"));

  ModalHostViewProps(sourceProps, rawProps);
}

TEST(ModalHostViewProps_presentationStyle_FormSheet, etc) {
  auto const &sourceProps = ModalHostViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("presentationStyle", "formSheet"));

  ModalHostViewProps(sourceProps, rawProps);
}

TEST(ModalHostViewProps_presentationStyle_OverFullScreen, etc) {
  auto const &sourceProps = ModalHostViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("presentationStyle", "overFullScreen"));

  ModalHostViewProps(sourceProps, rawProps);
}

TEST(ModalHostViewProps_transparent, etc) {
  auto const &sourceProps = ModalHostViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("transparent", true));

  ModalHostViewProps(sourceProps, rawProps);
}

TEST(ModalHostViewProps_hardwareAccelerated, etc) {
  auto const &sourceProps = ModalHostViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("hardwareAccelerated", true));

  ModalHostViewProps(sourceProps, rawProps);
}

TEST(ModalHostViewProps_visible, etc) {
  auto const &sourceProps = ModalHostViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("visible", true));

  ModalHostViewProps(sourceProps, rawProps);
}

TEST(ModalHostViewProps_supportedOrientations_Portrait, etc) {
  auto const &sourceProps = ModalHostViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("supportedOrientations", "portrait"));

  ModalHostViewProps(sourceProps, rawProps);
}

TEST(ModalHostViewProps_supportedOrientations_PortraitUpsideDown, etc) {
  auto const &sourceProps = ModalHostViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("supportedOrientations", "portrait-upside-down"));

  ModalHostViewProps(sourceProps, rawProps);
}

TEST(ModalHostViewProps_supportedOrientations_Landscape, etc) {
  auto const &sourceProps = ModalHostViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("supportedOrientations", "landscape"));

  ModalHostViewProps(sourceProps, rawProps);
}

TEST(ModalHostViewProps_supportedOrientations_LandscapeLeft, etc) {
  auto const &sourceProps = ModalHostViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("supportedOrientations", "landscape-left"));

  ModalHostViewProps(sourceProps, rawProps);
}

TEST(ModalHostViewProps_supportedOrientations_LandscapeRight, etc) {
  auto const &sourceProps = ModalHostViewProps();
  auto const &rawProps = RawProps(folly::dynamic::object("supportedOrientations", "landscape-right"));

  ModalHostViewProps(sourceProps, rawProps);
}