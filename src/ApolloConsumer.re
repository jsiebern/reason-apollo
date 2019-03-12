open ApolloClient;

[@react.component] [@bs.module "react-apollo"]
external make:
  (~children: generatedApolloClient => React.element) => React.element =
  "ApolloConsumer";
