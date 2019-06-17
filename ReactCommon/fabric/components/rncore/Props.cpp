
/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include <react/components/rncore/Props.h>
#include <react/components/image/conversions.h>
#include <react/core/propsConversions.h>

namespace facebook {
namespace react {

ProgressViewProps::ProgressViewProps(
    const ProgressViewProps &sourceProps,
    const RawProps &rawProps): ViewProps(sourceProps, rawProps),

    progress(convertRawProp(rawProps, "progress", sourceProps.progress, progress)),
    progressViewStyle(convertRawProp(rawProps, "progressViewStyle", sourceProps.progressViewStyle, progressViewStyle)),
    progressTintColor(convertRawProp(rawProps, "progressTintColor", sourceProps.progressTintColor, progressTintColor)),
    trackTintColor(convertRawProp(rawProps, "trackTintColor", sourceProps.trackTintColor, trackTintColor)),
    progressImage(convertRawProp(rawProps, "progressImage", sourceProps.progressImage, progressImage)),
    trackImage(convertRawProp(rawProps, "trackImage", sourceProps.trackImage, trackImage))
      {}
PullToRefreshViewProps::PullToRefreshViewProps(
    const PullToRefreshViewProps &sourceProps,
    const RawProps &rawProps): ViewProps(sourceProps, rawProps),

    tintColor(convertRawProp(rawProps, "tintColor", sourceProps.tintColor, tintColor)),
    titleColor(convertRawProp(rawProps, "titleColor", sourceProps.titleColor, titleColor)),
    title(convertRawProp(rawProps, "title", sourceProps.title, title)),
    refreshing(convertRawProp(rawProps, "refreshing", sourceProps.refreshing, refreshing))
      {}
AndroidSwipeRefreshLayoutProps::AndroidSwipeRefreshLayoutProps(
    const AndroidSwipeRefreshLayoutProps &sourceProps,
    const RawProps &rawProps): ViewProps(sourceProps, rawProps),

    enabled(convertRawProp(rawProps, "enabled", sourceProps.enabled, enabled)),
    colors(convertRawProp(rawProps, "colors", sourceProps.colors, colors)),
    progressBackgroundColor(convertRawProp(rawProps, "progressBackgroundColor", sourceProps.progressBackgroundColor, progressBackgroundColor)),
    size(convertRawProp(rawProps, "size", sourceProps.size, size)),
    progressViewOffset(convertRawProp(rawProps, "progressViewOffset", sourceProps.progressViewOffset, progressViewOffset)),
    refreshing(convertRawProp(rawProps, "refreshing", sourceProps.refreshing, refreshing))
      {}
SliderProps::SliderProps(
    const SliderProps &sourceProps,
    const RawProps &rawProps): ViewProps(sourceProps, rawProps),

    disabled(convertRawProp(rawProps, "disabled", sourceProps.disabled, disabled)),
    enabled(convertRawProp(rawProps, "enabled", sourceProps.enabled, enabled)),
    maximumTrackImage(convertRawProp(rawProps, "maximumTrackImage", sourceProps.maximumTrackImage, maximumTrackImage)),
    maximumTrackTintColor(convertRawProp(rawProps, "maximumTrackTintColor", sourceProps.maximumTrackTintColor, maximumTrackTintColor)),
    maximumValue(convertRawProp(rawProps, "maximumValue", sourceProps.maximumValue, maximumValue)),
    minimumTrackImage(convertRawProp(rawProps, "minimumTrackImage", sourceProps.minimumTrackImage, minimumTrackImage)),
    minimumTrackTintColor(convertRawProp(rawProps, "minimumTrackTintColor", sourceProps.minimumTrackTintColor, minimumTrackTintColor)),
    minimumValue(convertRawProp(rawProps, "minimumValue", sourceProps.minimumValue, minimumValue)),
    step(convertRawProp(rawProps, "step", sourceProps.step, step)),
    testID(convertRawProp(rawProps, "testID", sourceProps.testID, testID)),
    thumbImage(convertRawProp(rawProps, "thumbImage", sourceProps.thumbImage, thumbImage)),
    trackImage(convertRawProp(rawProps, "trackImage", sourceProps.trackImage, trackImage)),
    thumbTintColor(convertRawProp(rawProps, "thumbTintColor", sourceProps.thumbTintColor, thumbTintColor)),
    value(convertRawProp(rawProps, "value", sourceProps.value, value))
      {}
ActivityIndicatorViewProps::ActivityIndicatorViewProps(
    const ActivityIndicatorViewProps &sourceProps,
    const RawProps &rawProps): ViewProps(sourceProps, rawProps),

    hidesWhenStopped(convertRawProp(rawProps, "hidesWhenStopped", sourceProps.hidesWhenStopped, hidesWhenStopped)),
    animating(convertRawProp(rawProps, "animating", sourceProps.animating, animating)),
    color(convertRawProp(rawProps, "color", sourceProps.color, color)),
    size(convertRawProp(rawProps, "size", sourceProps.size, size))
      {}
UnimplementedNativeViewProps::UnimplementedNativeViewProps(
    const UnimplementedNativeViewProps &sourceProps,
    const RawProps &rawProps): ViewProps(sourceProps, rawProps),

    name(convertRawProp(rawProps, "name", sourceProps.name, name))
      {}
SwitchProps::SwitchProps(
    const SwitchProps &sourceProps,
    const RawProps &rawProps): ViewProps(sourceProps, rawProps),

    disabled(convertRawProp(rawProps, "disabled", sourceProps.disabled, disabled)),
    value(convertRawProp(rawProps, "value", sourceProps.value, value)),
    tintColor(convertRawProp(rawProps, "tintColor", sourceProps.tintColor, tintColor)),
    onTintColor(convertRawProp(rawProps, "onTintColor", sourceProps.onTintColor, onTintColor)),
    thumbTintColor(convertRawProp(rawProps, "thumbTintColor", sourceProps.thumbTintColor, thumbTintColor))
      {}
ModalHostViewProps::ModalHostViewProps(
    const ModalHostViewProps &sourceProps,
    const RawProps &rawProps): ViewProps(sourceProps, rawProps),

    animationType(convertRawProp(rawProps, "animationType", sourceProps.animationType, animationType)),
    presentationStyle(convertRawProp(rawProps, "presentationStyle", sourceProps.presentationStyle, presentationStyle)),
    transparent(convertRawProp(rawProps, "transparent", sourceProps.transparent, transparent)),
    hardwareAccelerated(convertRawProp(rawProps, "hardwareAccelerated", sourceProps.hardwareAccelerated, hardwareAccelerated)),
    visible(convertRawProp(rawProps, "visible", sourceProps.visible, visible)),
    supportedOrientations(convertRawProp(rawProps, "supportedOrientations", sourceProps.supportedOrientations, supportedOrientations)),
    identifier(convertRawProp(rawProps, "identifier", sourceProps.identifier, identifier))
      {}

} // namespace react
} // namespace facebook
