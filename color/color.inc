<?php

/**
 * @file
 * Lists available colors and color schemes for the Bootstrap Barrio theme.
 */

$info = [
  // Available colors and color labels used in theme.
  'fields' => [
    'headertop' => t('Header Top Background'),
    'header' => t('Header Background'),
    'navbar' => t('Navigation Bar'),
    'navitem' => t('Nav Item'),
    'bg' => t('Main background'),
    'sidebar' => t('Sidebar background'),
    'sidebarborders' => t('Sidebar borders'),
    'footer' => t('Footer background'),
    'button' => t('Primary button background'),
    'buttonhover' => t('Primary button hover'),
    'titleslogan' => t('Title and slogan'),
    'text' => t('Text color'),
    'link' => t('Link color'),
  ],
  // Pre-defined color schemes.
  'schemes' => [
    'default' => [
      'title' => t('PBS (default)'),
      'colors' => [
        'headertop' => '#437a76',
        'header' => '#e4e6e6',
        'navbar' => '#ffffff',
        'navitem' => '#437a76',
        'bg' => '#C8C8C8',
        'sidebar' => '#f6f6f2',
        'sidebarborders' => '#f9f9f9',
        'footer' => '#292929',
        'button' => '#007bff',
        'buttonhover' => '#0256b1',
        'titleslogan' => '#fffeff',
        'text' => '#3b3b3b',
        'link' => '#0071b3',
      ],
    ],
    'bluelogon' => [
      'title' => t('Blue Lagoon'),
      'colors' => [
        'headertop' => '#055a8e',
        'header' => '#e4e6e6',
        'navbar' => '#ffffff',
        'navitem' => '#437a76',
        'bg' => '#ffffff',
        'sidebar' => '#f6f6f2',
        'sidebarborders' => '#f9f9f9',
        'footer' => '#292929',
        'button' => '#007bff',
        'buttonhover' => '#0256b1',
        'titleslogan' => '#fffeff',
        'text' => '#3b3b3b',
        'link' => '#0071b3',
      ],
    ],
    'firehouse' => [
      'title' => t('Firehouse'),
      'colors' => [
        'headertop' => '#cd2d2d',
        'header' => '#e4e6e6',
        'navbar' => '#ffffff',
        'navitem' => '#437a76',
        'bg' => '#ffffff',
        'sidebar' => '#f1f4f0',
        'sidebarborders' => '#ededed',
        'footer' => '#1f1d1c',
        'button' => '#d6121f',
        'buttonhover' => '#a90f19',
        'titleslogan' => '#fffeff',
        'text' => '#888888',
        'link' => '#d6121f',
      ],
    ],
    'ice' => [
      'title' => t('Ice'),
      'colors' => [
        'headertop' => '#d0d0d0',
        'header' => '#e4e6e6',
        'navbar' => '#ffffff',
        'navitem' => '#437a76',
        'bg' => '#ffffff',
        'sidebar' => '#ffffff',
        'sidebarborders' => '#cccccc',
        'footer' => '#016b83',
        'button' => '#019dbf',
        'buttonhover' => '#016c83',
        'titleslogan' => '#000000',
        'text' => '#4a4a4a',
        'link' => '#019dbf',
      ],
    ],
    'plum' => [
      'title' => t('Plum'),
      'colors' => [
        'headertop' => '#4c1c58',
        'header' => '#e4e6e6',
        'navbar' => '#ffffff',
        'navitem' => '#437a76',
        'bg' => '#fffdf7',
        'sidebar' => '#edede7',
        'sidebarborders' => '#e7e7e7',
        'footer' => '#2c2c28',
        'button' => '#9d408d',
        'buttonhover' => '#77316b',
        'titleslogan' => '#ffffff',
        'text' => '#301313',
        'link' => '#9d408d',
      ],
    ],
    'slate' => [
      'title' => t('Slate'),
      'colors' => [
        'headertop' => '#4a4a4a',
        'header' => '#e4e6e6',
        'navbar' => '#ffffff',
        'navitem' => '#437a76',
        'bg' => '#ffffff',
        'sidebar' => '#ffffff',
        'sidebarborders' => '#d0d0d0',
        'footer' => '#161617',
        'button' => '#0073b6',
        'buttonhover' => '#00517f',
        'titleslogan' => '#ffffff',
        'text' => '#3b3b3b',
        'link' => '#0073b6',
      ],
    ],
  ],

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => [
    'css/colors.css',
  ],

  // Files to copy.
  'copy' => [
    'logo.svg',
  ],

  // Preview files.
  'preview_library' => 'bootstrap_barrio_pbs/color.preview',
  'preview_html' => 'color/preview.html',

  // Attachments.
  '#attached' => [
    'drupalSettings' => [
      'color' => [
        // Put the logo path into JavaScript for the live preview.
        'logo' => theme_get_setting('logo.url', 'bootstrap_barrio_pbs'),
      ],
    ],
  ],
];
