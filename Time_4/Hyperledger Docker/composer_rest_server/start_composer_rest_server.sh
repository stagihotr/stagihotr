#!/bin/bash
echo
echo "**********************************************"
echo "STARTING COMPOSER REST SERVER ...  "
echo "**********************************************"
echo

# alterar o nome do card pelo o seu card : admin@tutorial-network

composer-rest-server -c admin@tutorial-network -n "always" -y "No" -a false -w true -t false 

echo
echo "Browse Composer Rest Server at http://localhost:3000"
echo
