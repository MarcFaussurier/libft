# default variables
include .misc/deps/ezbuild/header.mk

# here you can overide default values set inside header.mk
# mimal example:
NAME		:= libft.a
TYPE		:= static
DEBUG		:= 0
TESTDIR		:= .misc/tests

# default build rules
include .misc/deps/ezbuild/footer.mk

install:
	./.misc/install.sh

norme:
	norminette

release:
	./.misc/release.sh
