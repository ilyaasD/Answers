FT_USER=nolibit
groups $FT_USER | sed "s/$FT_USER : //" | tr " " ","
