# Settings for compiling lito camera architecture

ifeq ($(CONFIG_QGKI),y)
CONFIG_TECHPACK_CAMERA=y
else
CONFIG_TECHPACK_CAMERA=m
endif

# Localized KCONFIG settings
CONFIG_SPECTRA_FD := y
CONFIG_SPECTRA_ISP := y
CONFIG_SPECTRA_ICP := y
CONFIG_SPECTRA_JPEG := y
CONFIG_SPECTRA_LRME := y
CONFIG_SPECTRA_SENSOR := y
CONFIG_MI7250_CAMERA := y

# Flags to pass into C preprocessor
ccflags-y += -DCONFIG_SPECTRA_FD=1
ccflags-y += -DCONFIG_SPECTRA_ISP=1
ccflags-y += -DCONFIG_SPECTRA_ICP=1
ccflags-y += -DCONFIG_SPECTRA_JPEG=1
ccflags-y += -DCONFIG_SPECTRA_LRME=1
ccflags-y += -DCONFIG_SPECTRA_SENSOR=1
