#!/bin/bash

for file in $(ls | grep ".c.1"); do
    for ((j = 1; j <= 10; j++)); do 
        head -n $((j * 5)) "$file" > "${file%.1}" 
        echo "TASK-$(echo "$file" | awk -F'-' '{print $1}') ${file%.1}-part$j"
        git add "${file%.1}"
        git commit -m "TASK-$(echo "$file" | awk -F'-' '{print $1}')"
        git push
    done
done
