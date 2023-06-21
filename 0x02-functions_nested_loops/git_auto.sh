#!/bin/bash
# Prompt the user for the file name
read -p "Enter file name:" file_name
# Prompt the user for the commit message
read -p "Enter the commit message:" commit_message
# Add the file to the Git repository
git add "$file_name"
# Commit the changes with the provided commit message 
git commit -m "$commit_message"
# Push the changes to the remote repository 
git push origin master
