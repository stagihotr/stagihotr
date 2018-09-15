Vagrant.configure("2") do |config|
  config.vm.box = "ubuntu/xenial64" # Ubuntu LTS 16.04
  
  config.vm.network "private_network", ip: "192.168.33.11"
  
  config.vm.synced_folder "./", "/hyperledger"
  
  config.vm.provider "virtualbox" do |vb|
      vb.memory = "2048"
  end

  config.vm.provision "shell", inline: <<-SHELL
    # UPGRADE GIT
    add-apt-repository ppa:git-core/ppa
    apt update
    apt upgrade -y

    # INSTALL DOCKER
    apt-get install -y apt-transport-https ca-certificates curl software-properties-common
    curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo apt-key add -
    add-apt-repository "deb [arch=amd64] https://download.docker.com/linux/ubuntu $(lsb_release -cs) stable"
    apt-get update
    apt-get install -y docker-ce
    usermod -aG docker vagrant

    # INSTALL DOCKER-COMPOSE
    curl -L "https://github.com/docker/compose/releases/download/1.22.0/docker-compose-$(uname -s)-$(uname -m)" -o /usr/local/bin/docker-compose
    chmod +x /usr/local/bin/docker-compose

    # INSTALL NPM AND NODEJS
    apt-get install -y npm
    npm install -g npm@latest
    npm install -g n
    n lts
  SHELL
end
