find . -type f -and -name "*.sh" | sort | rev | cut -d / -f 1 | cut -d . -f 2 | rev
