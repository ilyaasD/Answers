ifconfig | grep HWaddr | cut -d \t -f 4 | sed "s/HWaddr//" | tr -d " "
