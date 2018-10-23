FROM node:10.12.0-alpine

ENV APP_DIR /usr/src/app

RUN mkdir -p ${APP_DIR}
WORKDIR ${APP_DIR}

COPY . ${APP_DIR}

RUN npm install

EXPOSE 3007

ENTRYPOINT npm start