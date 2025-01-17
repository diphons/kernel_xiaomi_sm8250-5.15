# Settings for compiling holi camera architecture

ifeq ($(CONFIG_QGKI),y)
CONFIG_TECHPACK_CAMERA=y
else
CONFIG_TECHPACK_CAMERA=m
endif

# Localized KCONFIG settings
CONFIG_SPECTRA_ISP := y
CONFIG_SPECTRA_OPE := y
CONFIG_SPECTRA_TFE := y
CONFIG_SPECTRA_SENSOR := y

# Flags to pass into C preprocessor
ccflags-y += -DCONFIG_SPECTRA_ISP=1
ccflags-y += -DCONFIG_SPECTRA_OPE=1
ccflags-y += -DCONFIG_SPECTRA_TFE=1
ccflags-y += -DCONFIG_SPECTRA_SENSOR=1
