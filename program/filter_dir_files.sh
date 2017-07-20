<<comment
/**
 * @file      : filter_dir_files.sh
 * @brief     : Topic: Linux shell script
 *              Write a script to filter and show list of files/directories
 *              which exceeds specific size limit. Path and size limit need to
 *              get from user at runtime.
 * @author    : Md Sikandar(md.sikandar@vvdntech.in)
 * @Copyright : (c)2017, VVDN Technologies Pvt. Ltd.
 *              Permission is hereby granted to everyone in VVDN Technologies
 *              to use the Software without restriction, including without
 *              limitation the rights to use, copy, modify, merge, publish,
 *              distribute,distribute with modifications.
 */
comment

# Header files declarations
#path
#!/bin/sh

echo "Enter the directory"
read dir
# Here i am checking whether the directory is valid or invalid
if [ -d $dir ]
    then
    cd $dir
    echo  "Enter the size of file k(for kb) or M (for Mb)"
    read file_size
    # print the files and directories depends on the size and path
    find . -size +$file_size
    exit 1
fi
echo "its not a directory"
