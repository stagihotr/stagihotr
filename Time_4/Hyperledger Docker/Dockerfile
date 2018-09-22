FROM ubuntu:18.04

# CREATE USER DOCKER
RUN apt-get update && apt-get install sudo

RUN useradd -m docker && echo "docker:docker" | chpasswd && adduser docker sudo

RUN echo "docker ALL=(root) NOPASSWD:ALL" > /etc/sudoers.d/docker && \
    chmod 0440 /etc/sudoers.d/docker

USER docker

ENV APP_DIR /home/docker

COPY ./build ${APP_DIR}
COPY ./composer_playground ${APP_DIR}
COPY ./composer_rest_server ${APP_DIR}
COPY ./app.py ${APP_DIR}
WORKDIR ${APP_DIR}

# REQUIREMENTS
RUN sudo chmod +x install_requirements.sh && sudo ./install_requirements.sh

# NODE MODULES
RUN sudo chmod +x ./install_node_modules.sh && ./install_node_modules.sh

# FABRIC
RUN sudo chmod +x ./download_fabric.sh && ./download_fabric.sh

ENTRYPOINT python3 app.py
