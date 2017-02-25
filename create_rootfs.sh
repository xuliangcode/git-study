cd rootfs
#cp ../linux/drivers/joylinux/joylinux.ko .
find . | cpio -o -H newc | gzip -9 > ../rootfs.gz
cd -
