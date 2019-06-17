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

import type {SchemaType} from '../../../packages/react-native-codegen/src/CodegenSchema.js';

const ProgressViewIOSSchema: SchemaType = {
  modules: {
    ProgressViewSchema: {
      components: {
        ProgressView: {
          isDeprecatedPaperComponentNameRCT: true,
          extendsProps: [
            {
              type: 'ReactNativeBuiltInType',
              knownTypeName: 'ReactNativeCoreViewProps',
            },
          ],
          events: [],
          props: [
            {
              name: 'progress',
              optional: true,
              typeAnnotation: {
                type: 'FloatTypeAnnotation',
                default: 1,
              },
            },
            {
              name: 'progressViewStyle',
              optional: true,
              typeAnnotation: {
                type: 'StringEnumTypeAnnotation',
                default: 'default',
                options: [
                  {
                    name: 'default',
                  },
                  {
                    name: 'bar',
                  },
                ],
              },
            },
            {
              name: 'progressTintColor',
              optional: true,
              typeAnnotation: {
                type: 'NativePrimitiveTypeAnnotation',
                name: 'ColorPrimitive',
              },
            },
            {
              name: 'trackTintColor',
              optional: true,
              typeAnnotation: {
                type: 'NativePrimitiveTypeAnnotation',
                name: 'ColorPrimitive',
              },
            },
            {
              name: 'progressImage',
              optional: true,
              typeAnnotation: {
                type: 'NativePrimitiveTypeAnnotation',
                name: 'ImageSourcePrimitive',
              },
            },
            {
              name: 'trackImage',
              optional: true,
              typeAnnotation: {
                type: 'NativePrimitiveTypeAnnotation',
                name: 'ImageSourcePrimitive',
              },
            },
          ],
        },
      },
    },
  },
};

module.exports = ProgressViewIOSSchema;
