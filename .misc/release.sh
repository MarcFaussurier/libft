#!/usr/bin/env bash
read -r -p "This will delete the misc folder (for moulinette) are you sure? [y/N] " response
case "$response" in
	[yY][eE][sS]|[yY])
		BASEDIR=$(dirname "$0")
		echo "rm -rf $(pwd)/$BASEDIR"
		;;
	*)
		do_something_else
		;;
esac
