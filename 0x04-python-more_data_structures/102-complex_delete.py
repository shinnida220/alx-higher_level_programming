#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    lkeys = list(a_dictionary.keys())

    for val_dic in lkeys:
        if value == a_dictionary.get(val_dic):
            del a_dictionary[val_dic]

    return (a_dictionary)
