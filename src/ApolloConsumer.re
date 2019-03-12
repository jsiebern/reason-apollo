open ApolloClient;

[@bs.config {jsx: 3}];

[@react.component] [@bs.module "react-apollo"]
external make:
  (~children: generatedApolloClient => React.element) => React.element =
  "ApolloConsumer";
