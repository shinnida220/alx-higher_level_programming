#!/usr/bin/python3
def element_at(my_list, idx):
    length = len(my_list)

    if 0 > idx or idx > length - 1:
        return (None)

    return(my_list[idx])
