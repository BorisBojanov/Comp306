/*
title: Comparator.cpp
description: Contains a Comparator class that compares two Book objects
date: 24 November 2024
author: Boris Bojanov
version: 1.0
copyright: Boris Bojanov 2024

DOCUMENTATION
Program Purpose:
Impliment a Comparator class that compares two Book objects.


Compile: This file is to be included in BookShelf.cpp

Classes:
Comparator - class for comparing two Book objects

Variables:

Methods:
compareTo - bool - compare two Book objects

TEST PLAN
Normal case:
Make sure the Comparator class is implemented correctly by calling the compareTo method outside of the class.
*/

#include "Comparator.h"

//
Comparator::Comparator() {
}

// This method should make a two-step comparison and return a Boolean value
// Compare two Book objects
// if the names are the same, the second comparison should compare the years of publication

bool Comparator::compareTo(Book book1, Book book2) {
    if (book1.getTitle() < book2.getTitle()) {
        return true; // Sort by title first
    } else if (book1.getTitle() == book2.getTitle()) {
        return book1.getYearOfPublication() < book2.getYearOfPublication(); // Then by year
    }
    return false; // If neither condition is true, book1 does not precede book2
}