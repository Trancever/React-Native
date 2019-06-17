/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import "RCTProgressViewComponentView.h"

#import <React/RCTImageResponseObserverProxy.h>
#import <react/components/rncore/ComponentDescriptors.h>
#import <react/components/rncore/EventEmitters.h>
#import <react/components/rncore/Props.h>

using namespace facebook::react;

static UIProgressViewStyle convertProgressViewProgressViewStyle(const ProgressViewProgressViewStyle &style)
{
    switch (style) {
        case ProgressViewProgressViewStyle::Default:
            return UIProgressViewStyleDefault;
        case ProgressViewProgressViewStyle::Bar:
            return UIProgressViewStyleBar;
    }
}

@implementation RCTProgressViewComponentView {
    UIProgressView *_progressView;
    
    UIImage *_progressImage;
    UIImage *_trackImage;
    
//    const ImageResponseObserverCoordinator *_progressImageCoordinator;
//    const ImageResponseObserverCoordinator *_trackImageCoordinator;
}

#pragma mark - RCTComponentViewProtocol

+ (ComponentDescriptorProvider)componentDescriptorProvider
{
    return concreteComponentDescriptorProvider<ProgressViewComponentDescriptor>();
}

- (instancetype)initWithFrame:(CGRect)frame
{
    if (self = [super initWithFrame:frame]) {
        static const auto defaultProps = std::make_shared<const ProgressViewProps>();
        _props = defaultProps;
        
        _progressView = [[UIProgressView new] initWithFrame:self.bounds];
 
        [_progressView setProgress:defaultProps->progress animated:YES];
        
        _progressView.progressViewStyle = convertProgressViewProgressViewStyle(defaultProps->progressViewStyle);
        
        _progressView.progressTintColor = [UIColor colorWithCGColor:defaultProps->progressTintColor.get()];
        
        _progressView.trackTintColor = [UIColor colorWithCGColor:defaultProps->trackTintColor.get()];
        
        _progressView.progressImage = defaultProps->progressImage;
        
        self.contentView = _progressView;
    }
    
    return self;
}

- (void)updateProps:(Props::Shared const &)props oldProps:(Props::Shared const &)oldProps
{
    const auto &oldViewProps = *std::static_pointer_cast<const ProgressViewProps>(oldProps ?: _props);
    const auto &newViewProps = *std::static_pointer_cast<const ProgressViewProps>(props);

    [super updateProps:props oldProps:oldProps];

    if (oldViewProps.progress != newViewProps.progress) {
        [_progressView setProgress:newViewProps.progress animated:YES];
    }
    
    if (oldViewProps.progressViewStyle !=  newViewProps.progressViewStyle) {
        _progressView.progressViewStyle = convertProgressViewProgressViewStyle(newViewProps.progressViewStyle);
    }
    
    if (oldViewProps.progressTintColor !=  newViewProps.progressTintColor) {
        _progressView.progressTintColor = [UIColor colorWithCGColor:newViewProps.progressTintColor.get()];
    }
    
    if (oldViewProps.trackTintColor !=  newViewProps.trackTintColor) {
        _progressView.trackTintColor = [UIColor colorWithCGColor:newViewProps.trackTintColor.get()];
    }
}

@end
