AIP=BeanShell-2.0b4.aip

all: installer

installer: $(AIP)
	AdvancedInstaller /build $(AIP)
