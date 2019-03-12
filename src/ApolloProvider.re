open ApolloClient;

[@bs.config {jsx: 3}];

[@bs.module "react-apollo"]
external make:
  (~client: generatedApolloClient, ~children: 'children) => React.element =
  "ApolloProvider";
