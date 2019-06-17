/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @format
 * @flow
 */

'use strict';

const React = require('react');
const {ProgressViewIOS, StyleSheet, View, Button} = require('react-native');

type Props = {||};
type State = {|
  progress: number,
  style: 'default' | 'bar',
|};

class ProgressViewExample extends React.Component<Props, State> {
  _rafId: ?AnimationFrameID = null;

  state = {
    progress: 0,
    style: 'default',
  };

  componentDidMount() {
    this.updateProgress();
  }

  componentWillUnmount() {
    if (this._rafId != null) {
      cancelAnimationFrame(this._rafId);
    }
  }

  updateProgress = () => {
    const progress = this.state.progress + 0.01;
    this.setState({progress});
    this._rafId = requestAnimationFrame(() => this.updateProgress());
  };

  /* $FlowFixMe(>=0.85.0 site=react_native_fb) This comment suppresses an error
   * found when Flow v0.85 was deployed. To see the error, delete this comment
   * and run Flow. */
  getProgress = offset => {
    const progress = this.state.progress + offset;
    return Math.sin(progress % Math.PI) % 1;
  };

  render() {
    return (
      <View style={styles.container}>
        <ProgressViewIOS
          style={styles.progressView}
          progress={this.getProgress(0)}
          progressViewStyle={this.state.style}
        />
        <ProgressViewIOS
          style={styles.progressView}
          progressTintColor="purple"
          progress={this.getProgress(0.2)}
          progressViewStyle={this.state.style}
        />
        <ProgressViewIOS
          style={styles.progressView}
          progressTintColor="red"
          progress={this.getProgress(0.4)}
          progressViewStyle={this.state.style}
        />
        <ProgressViewIOS
          style={styles.progressView}
          progressTintColor="orange"
          progress={this.getProgress(0.6)}
          progressViewStyle={this.state.style}
        />
        <ProgressViewIOS
          style={styles.progressView}
          progressTintColor="yellow"
          progress={this.getProgress(0.8)}
          progressViewStyle={this.state.style}
        />
        <Button
          title="change style"
          onPress={() => {
            this.setState(({style}) => ({
              style: style === 'default' ? 'bar' : 'default',
            }));
          }}
        />
      </View>
    );
  }
}

const styles = StyleSheet.create({
  container: {
    marginTop: -20,
    backgroundColor: 'transparent',
  },
  progressView: {
    marginTop: 20,
  },
});

exports.displayName = (undefined: ?string);
exports.framework = 'React';
exports.title = 'ProgressViewIOS';
exports.description = 'ProgressViewIOS';
exports.examples = [
  {
    title: 'ProgressViewIOS',
    render() {
      return <ProgressViewExample />;
    },
  },
];
